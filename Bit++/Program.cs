using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Bit__
{
    class Program
    {
        static void Main(string[] args)
        {
            int x = 0;
            int n = int.Parse(Console.ReadLine());
            string a;
            for(int i = 0; i < n; i++)
            {
                a = Console.ReadLine();
                for(int j = 0; j < a.Length; j++)
                {
                    if (a.Substring(j,1) == "+")
                    {
                        x++;
                        break;
                    }
                    if(a.Substring(j,1) == "-")
                    {
                        x--;
                        break;
                    }
                }
            }

            Console.WriteLine(x);
            Console.ReadKey();
        }
    }
}
