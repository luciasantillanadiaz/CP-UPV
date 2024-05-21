using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TheaterSquare
{
    class Program
    {
        static void Main(string[] args)
        {
            string q = Console.ReadLine();
            string[] w = q.Split(' ');
            double[] N = new double[3];

            for(int i = 0; i < 3; i++)
            {
                N[i] = double.Parse(w[i]);
            }

            double n = N[0];
            double m = N[1];
            double a = N[2];
            long x;

            if (a == 0)
            {
                x = 0;
            }
            else
            {
                x = (long)Math.Ceiling(n / a) * (long)Math.Ceiling(m / a);
            }

            Console.WriteLine(x);
            
        }
    }
}
