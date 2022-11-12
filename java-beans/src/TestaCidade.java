import javax.swing.JOptionPane;

public class TestaCidade {
    public static void main(String[] args) {
        Cidade novaCidade = new Cidade();

        JOptionPane
            .showMessageDialog(null, "Informe os dados da Cidade");

        novaCidade.setNome(JOptionPane
            .showInputDialog("Nome:", novaCidade.getNome()));
        
        novaCidade.setUf(JOptionPane
            .showInputDialog("UF:", novaCidade.getNome()));

        JOptionPane.showMessageDialog(
            null, 
            "Cidade cadastrada! \n\n" + 
            "Nome: " + novaCidade.getNome() + " \n" + 
            "UF: " + novaCidade.getUf()
        );
    }
}