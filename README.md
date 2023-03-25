### Banco de Dados

**Transações no MySQL**
- Um conjunto de uma ou mais operações que compõem uma única tarefa ou unidade lógica de trabalho a ser executada.

**Propriedades ACID**
- Atomicidade
  - Se as operações forem confirmadas, elas acontecerão todas sem exceção. Não ocorre a execução de apenas parte das operações contidas na transação.
- Consistência
  -  As alterações no banco de dados somente acontecem caso o novo estado do sistema for válido. Se uma mudança inválida for executada, ela irá falhar, e o sistema permanece no seu estado anterior, válido.
- Isolamento
  - A transação não é visível a outros processos até que ela seja confirmada e persistida no banco.
- Durabilidade
  - Após a transação ter sido confirmada, ou seja, que suas operações tenham todas sido executadas com sucesso, as alterações são automaticamente persistidas (gravadas no banco), e não é necessário se preocupar em gravar as mudanças.

Deve ser executada de forma completa ou não ter nenhum efeito na tabelas.

Verificar se o autocommit está ativado no sistema:
```sql
SELECT @@autocommit;
```

Para forçar MySQL a não executar commit automaticamente, usamos a seguinte declaração:
```sql
SET autocommit = 0;
# ou
SET autocommit = OFF
```

Para habilitar novamente o autocommit usamos a seguinte declaração:
```sql
SET autocommit = 1;
# ou
SET autocommit = ON;
```

**COMMIT -** Consolidação da transação.
```sql
SELECT TRANSACTION;
  DELETE FROM tabela;
  INSERT INTO tabela (coluna1, coluna2, coluna3)
    VALUES ('Teste1', 'Teste2', 'Teste3');
   SELECT * FROM tabela;
COMMIT;

SELECT * FROM tabela;
```

**ROLLBACK -** Transação totalmente desfeita.
```sql
SELECT TRANSACTION;
  DELETE FROM tabela;
  INSERT INTO tabela (coluna1, coluna2, coluna3)
    VALUES ('Teste1', 'Teste2', 'Teste3');
   SELECT * FROM tabela;
ROLLBACK;

SELECT * FROM tabela;
```

**Transação em Stored Procedure**
```sql
DELIMITER //
CREATE PROCEDURE insere_dados()
BEGIN
DECLARE erro_sql TINYINT DEFAULT FALSE;
DECLARE CONTINUE HANDLER FOR SQLEXCEPTION SET erro_sql = TRUE;
START TRANSACTION;
  INSERT INTO Dados_Livro (NomeLivro, ISBN13, PrecoLivro) VALUES
    ('História da Numismática', '9789865321465', 78.60);
  INSERT INTO Dados_Livro (NomeLivro, ISBN13, PrecoLivro) VALUES
    ('Biologia Marinha', '9784233876972', 177.50);
  INSERT INTO Dados_Livro (NomeLivro, ISBN13, PrecoLivro) VALUES
    ('Química Experimental', '9789563210970', 165.32);
  INSERT INTO Dados_Livro (NomeLivro, ISBN13, PrecoLivro) VALUES
    ('Artes Plásticas', '9784523415974', 98,00); # Aqui há um erro que impedirá o COMMIT e provocará o ROLLBACK.
  IF erro_sql = FALSE THEN
    COMMIT;
    SELECT 'Transação efetivada com sucesso.' AS Resultado;
  ELSE
    ROLLBACK;
    SELECT 'Erro na transação' AS Resultado;
  END IF;
END//
DELIMITER ;
```
