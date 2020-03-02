using System;

namespace c_sharp
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            string s = Console.ReadLine();
            var r = 0;

            foreach (var t in s)
            {
                if (t == '-')
                {
                    r++;
                }
                else if(r>0)
                {
                    Console.WriteLine(r);
                    r = 0;
                }
            }

            Console.WriteLine(r);
        }
    }
}
