using System;

namespace c_sharp
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            string[] s = Console.ReadLine().Split(' ');
            var nb = int.Parse(s[0]);
            var b = int.Parse(s[1]);
            var j = int.Parse(Console.ReadLine());
            var reste = nb % (b + 1);

            if ((j == 0 && (reste != 0)) || (j == 1 && (reste == 0)))
            {
                Console.WriteLine("OUI");
            }
            else
            {
                Console.WriteLine("NON");
            }
        }
    }
}
