using System;
using System.Numerics;

namespace CSharp0003_VariablesAndSizes
{
    class CSharp0003_VariablesAndSizes
    {
        static void Main(string[] args)
        {
            // Primitive Variable types
            Console.WriteLine("The CHARACTER takes char between => " + char.MinValue + " <=> "
            + char.MaxValue + " and also size => " + sizeof(char) + " byte");

            Console.WriteLine("The BYTE takes value between => " + byte.MinValue + " <=> "
            + byte.MaxValue + " and also size => " + sizeof(byte) + " byte");

            Console.WriteLine("The SHORT takes value between => " + short.MinValue + " <=> "
            + short.MaxValue + " and also size => " + sizeof(short) + " byte");

            Console.WriteLine("The UNSIGNEDSHORT takes value between => " + ushort.MinValue + " <=> "
            + ushort.MaxValue + " and also size => " + sizeof(ushort) + " byte");

            Console.WriteLine("The INTEGER takes value between => " + int.MinValue + " <=> "
            + int.MaxValue + " and also size => " + sizeof(int) + " byte");

            Console.WriteLine("The UNSİGNEDINTEGER takes value between => " + uint.MinValue + " <=> "
            + uint.MaxValue + " and also size => " + sizeof(uint) + " byte");

            Console.WriteLine("The LONG takes value between => " + long.MinValue + " <=> "
            + long.MaxValue + " and also size => " + sizeof(long) + " byte");

            Console.WriteLine("The UNSİGNEDLONG takes value between => " + ulong.MinValue + " <=> "
            + ulong.MaxValue + " and also size => " + sizeof(ulong) + " byte");

            // convert toBigDecimal and ask for toPlainString()
            Console.WriteLine("The FLOAT takes value between " + new BigInteger(float.MinValue) + " <=> "
            + new BigInteger(float.MaxValue) + " and also size => " + sizeof(float) + " byte");
            Console.WriteLine("The FLOAT takes value between " + float.MinValue + " <=> "
            + float.MaxValue + " and also size => " + sizeof(float) + " byte");

            Console.WriteLine("The DOUBLE takes value between " + new BigInteger(double.MinValue) + " <=> "
            + new BigInteger(double.MaxValue) + " and also size => " + sizeof(double) + " byte");
            Console.WriteLine("The DOUBLE takes value between " + double.MinValue + " <=> "
            + double.MaxValue + " and also size => " + sizeof(double) + " byte");
        }
    }
}
