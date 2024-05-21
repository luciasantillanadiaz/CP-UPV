using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace NextRound
{
    class Program
    {
        static void Main(string[] args)
        {
            int count = 0;
            string line1 = Console.ReadLine();
            string[] arrayS1 = line1.Split(' ');
            int[] arrayI1 = new int[arrayS1.Length];

            for(int i = 0; i < arrayI1.Length; i++)
            {
                arrayI1[i] = int.Parse(arrayS1[i]);
            }

            int n = arrayI1[0];
            int k = arrayI1[1];

            string line2 = Console.ReadLine();
            string[] arrayS2 = line2.Split(' ');
            int[] a = new int[arrayS2.Length];

            for (int j = 0; j < n; j++)
            {
                a[j] = int.Parse(arrayS2[j]);
                if (a[j] >= a[k-1] && a[j] != 0)
                {
                    count++;
                }
                else
                {
                    break;
                }

            }
            Console.WriteLine(count);

        }
    }
}
