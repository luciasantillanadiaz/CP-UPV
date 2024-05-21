using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Team
{
    class Program
    {
        static void Main(string[] args)
        {
            int sol = 0;
            int nP = int.Parse(Console.ReadLine());
            int count = 0;
            string a = "";

            for(int l = 0; l < nP; l++)
            {
                a += Console.ReadLine();
                a += " ";
            }

            string[] o = a.Split(' ');
            int[] n = new int[a.Length];

            for (int i = 0; i < o.Length-1; i++)
            {
                n[i] = int.Parse(o[i]);
            }
            int k = 0;
            for(int j = 0; j < nP; j++)
            {
                while (k < n.Length)
                {
                    if (n[k] == 1)
                    {
                        count++;
                    }
                    if ((k+1)%3==0)
                    {
                        k++;
                        break;
                    }
                    k++;
                }
                if (count >= 2)
                {
                    sol++;
                }
                count = 0;
            }

            Console.WriteLine(sol);
        }
    }
}
