using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Goals_of_Victory
{
    class Program
    {
        static void Main(string[] args)
        {
            int t = int.Parse(Console.ReadLine());
            int[] T = new int[t];
            for (int i = 0; i < t; i++)
            {
                int n = int.Parse(Console.ReadLine());
                string a = Console.ReadLine();
                string[] e = a.Split(' ');
                int[] E = new int[e.Length];
                for (int k = 0; k < e.Length; k++)
                {
                    E[k] = int.Parse(e[k]);
                    T[i] -= E[k];
                }

            }
            for (int l = 0; l < T.Length; l++)
            {
                Console.WriteLine(T[l]);
            }

            Console.ReadKey();
        }
    }
}
