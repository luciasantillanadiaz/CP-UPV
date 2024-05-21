using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Domino_Piling
{
    class Program
    {
        static void Main(string[] args)
        {
            string a = Console.ReadLine();
            string[] b = a.Split(' ');
            int m = int.Parse(b[0]);
            int n = int.Parse(b[1]);
            Console.WriteLine(m * n / 2);
            Console.ReadKey();
        }
    }
}
