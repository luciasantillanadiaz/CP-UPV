using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Sets_and_Union
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());

            string[][] s = new string[n][];

            for(int i = 0; i < n; i++)
            {
                string a = Console.ReadLine();
                s[i] = a.Split(' ');
            }



            Console.WriteLine(s[1][1]);

            Console.ReadKey();


        }
    }
}
