import java.io.Serializable;

/**
 * 1º: Implementar a interface Serializable
 * 2º: Deve ter um construtor sem argumentos
 * 3º: Deve encapsular os atributos com visibilidade private e ter métodos publicos acessores
 */

public class Cidade implements Serializable{
    private String nome;
    private String uf;

    public Cidade(){}

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getUf() {
        return uf;
    }

    public void setUf(String uf) {
        this.uf = uf;
    }
}
