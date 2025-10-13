/**
 * Class que realiza operações matemáticas
 */
public class Calculadora {

    /**
     *
     * @param a Primeiro número
     * @param b Segundo número
     * @return resultado da soma dos dois numeros
     */
    public int somar(int a, int b){
        return a + b;
    }

    /**
     *
     * @param a Primeiro número
     * @param b Segundo número
     * @return resultado da subtração dos dois numeros
     */
    public int subtrair(int a, int b){
        return a - b;
    }

    /**
     *
     * @param a Primeiro número
     * @param b Segundo número
     * @return resultado da multiplicação dos dois numeros
     */
    public int multiplicar(int a, int b){
        return a * b;
    }

    /**
     *
     * @param a Primeiro número
     * @param b Segundo número
     * @return resultado da divisão dos dois numeros
     * @throws ArithmeticException Caso b seja 0
     */
    public double dividir(int a, int b) throws ArithmeticException {
        if(b==0){
            throw new ArithmeticException("Divisão por 0 não é permitido");
        }
        return (double) a/b;
    }
}
