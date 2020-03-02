using System;

namespace c_sharp
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            var currH = 0; 
            var currC = 0;
            var n = int.Parse(Console.ReadLine());
            string[] line  = Console.ReadLine().Split(' ');
            var h = int.Parse(line[0]);
            var c = int.Parse(line[1]);
            string temp;
            
            for (int i = 0; (i < n) && (currC <= c) && (currH <= h); ++i){
                temp = Console.ReadLine();
                if(temp.CompareTo("H") == 0){
                    ++currH;
                }else if (temp.CompareTo("C") == 0){
                    ++currC;
                }
            }

            if ((currC > c) || (currH > h)){
                Console.WriteLine("NON");
            }else{
                Console.WriteLine("OUI");
            }
            
        }
    }
}
