using System;

namespace c_sharp
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            var prix2nde = int.Parse(Console.ReadLine());
            var prix1ere = int.Parse(Console.ReadLine());
            var nbBillets2nde = int.Parse(Console.ReadLine());
            var nbBillets1ere = int.Parse(Console.ReadLine());
            
            Console.WriteLine((prix2nde * nbBillets2nde) + (prix1ere * nbBillets1ere));
        }
    }
}
