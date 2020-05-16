package Beginner;

import java.math.BigDecimal;

public class Java0003_VariablesAndSizes {

    public static void main(String[] args) {

        // Primitive Variable types
        System.out.println("The CHARACTER takes char between => " + Character.MIN_VALUE + " <=> "
        + Character.MAX_VALUE + " and also size => " + Character.SIZE + " byte");

        System.out.println("The BYTE takes value between => " + Byte.MIN_VALUE + " <=> "
        + Byte.MAX_VALUE + " and also size => " + Byte.SIZE + " byte");

        System.out.println("The SHORT takes value between => " + Short.MIN_VALUE + " <=> "
        + Short.MAX_VALUE + " and also size => " + Short.SIZE + " byte");

        System.out.println("The INTEGER takes value between => " + Integer.MIN_VALUE + " <=> "
        + Integer.MAX_VALUE + " and also size => " + Integer.SIZE + " byte");

        System.out.println("The LONG takes value between => " + Long.MIN_VALUE + " <=> "
        + Long.MAX_VALUE + " and also size => " + Long.SIZE + " byte");

        // convert toBigDecimal and ask for toPlainString()
        System.out.println("The FLOAT takes value between " + new BigDecimal(Float.MIN_VALUE).toPlainString() + " <=> "
        + new BigDecimal(Float.MAX_VALUE).toPlainString() + " and also size => " + Float.SIZE + " byte");
        System.out.println("The FLOAT takes value between " + Float.MIN_VALUE + " <=> "
        + Float.MAX_VALUE + " and also size => " + Float.SIZE + " byte");

        System.out.println("The DOUBLE takes value between " + new BigDecimal(Double.MIN_VALUE).toPlainString() + " <=> "
        + new BigDecimal(Double.MAX_VALUE).toPlainString() + " and also size => " + Double.SIZE + " byte");
        System.out.println("The DOUBLE takes value between " + Double.MIN_VALUE + " <=> "
        + Double.MAX_VALUE + " and also size => " + Double.SIZE + " byte");
    }
}
