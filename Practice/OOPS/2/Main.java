import java.util.Scanner;

class SquareCalculator {
    public double calculate(double number) {
        return number * number;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double number = scanner.nextDouble();

        SquareCalculator squareCalculator = new SquareCalculator();
        SquareRootCalculator squareRootCalculator = new SquareRootCalculator();

        double square = squareCalculator.calculate(number);
        double squareRoot = squareRootCalculator.calculate(number);

        System.out.println("Square value= " + square);
        System.out.println("Square root= " + squareRoot);
    }
}

class SquareRootCalculator extends SquareCalculator {
    @Override
    public double calculate(double number) {
        return Math.sqrt(number);
    }
}

