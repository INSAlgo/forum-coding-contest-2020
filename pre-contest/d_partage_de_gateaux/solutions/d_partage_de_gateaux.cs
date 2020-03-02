using System;
using System.Collections.Generic;
using System.Linq;

namespace c_sharp
{
    internal class Program
    {
        static int[][] Amis;
        static int[] nbPartsAmi;
        static int[] partsRestanteAmi;
        static int partsRestanteTotal;
        static int G, A, P;

        public static bool backtrack(int indexAmi, int nbAmisTotal)
        {
            if (indexAmi == nbAmisTotal)
            {
                return true;
            }

            bool res = false;
            foreach (var numGateau in Amis[indexAmi])
            {
                if (res)
                {
                    break;
                }
                
                partsRestanteAmi[numGateau] -= nbPartsAmi[indexAmi];
                partsRestanteTotal -= nbPartsAmi[indexAmi];
                if(partsRestanteAmi[numGateau] >= 0 && partsRestanteTotal >= (nbAmisTotal - indexAmi -1) ){
                    res = backtrack(indexAmi+1,nbAmisTotal);
                }
                partsRestanteAmi[numGateau] += nbPartsAmi[indexAmi];
                partsRestanteTotal += nbPartsAmi[indexAmi];
                
            }

            return res;
        }

        public static void Main(string[] args)
        {
            string[] s_read = Console.ReadLine().Split(' ');
            G = int.Parse(s_read[0]);
            A = int.Parse(s_read[1]);
            P = int.Parse(s_read[2]);

            Amis = new int[A][];
            nbPartsAmi = new int[A];

            int Gi, Pi, numGateau;
            for (var i = 0; i < A; ++i)
            {
                s_read = Console.ReadLine().Split(' ');
                Gi = int.Parse(s_read[0]);
                Pi = int.Parse(s_read[1]);

                nbPartsAmi[i] = Gi;
                Amis[i] = new int[Pi];
                s_read = Console.ReadLine().Split(' ');
                for (int j = 0; j < Pi; j++)
                { 
                    numGateau = int.Parse(s_read[j]);
                    Amis[i][j] = numGateau - 1;
                }
            }

            partsRestanteAmi = new int[G];
            for (int i = 0; i < G; i++) 
            {
                partsRestanteAmi[i] = P;
            }
            partsRestanteTotal = G * P;
            if (backtrack(0, A))
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
