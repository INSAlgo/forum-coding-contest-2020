using System;

namespace c_sharp
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            string[] line  = Console.ReadLine().Split(' ');
            var L = int.Parse(line[0]);
            var C = int.Parse(line[1]);

            int[] maxByColumn = new int[C];
            for (int i = 0; i < maxByColumn.Length; i++)
            {
                maxByColumn[i] = 0;
            }

            for (var row = 0; row < L; row++)
            {
                string[] values_string = Console.ReadLine().Split(' ');
                int[] values = new int[values_string.Length];
                for (int i = 0; i < values.Length; i++)
                {
                    values[i] = int.Parse(values_string[i]);
                }

                for (int i = 0; i < values.Length; i++)
                {
                    maxByColumn[i] = Math.Max(maxByColumn[i], values[i]);
                }
            }

            var H = int.Parse(Console.ReadLine());
            int[] hostess = new int[H];
            for (int i = 0; i < hostess.Length; i++)
            {
                hostess[i] = int.Parse(Console.ReadLine());
            }

            Array.Sort(hostess, new Comparison<int>(
                (i1, i2) => i2.CompareTo(i1)
            ));
            
            Array.Sort(maxByColumn, new Comparison<int>(
                (i1, i2) => i2.CompareTo(i1)
            ));
            
            for (int i = 0; i < maxByColumn.Length; i++)
            {
                if (hostess[i] < maxByColumn[i])
                {
                    Console.WriteLine("NON");
                    return;
                }
            }
               

            Console.WriteLine("OUI");
        }
    }
}
