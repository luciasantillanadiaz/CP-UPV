using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace WayTooLongWords
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = 0;
            string w;

            n = int.Parse(Console.ReadLine());

            for (int i = 0; i < n; i++)
            {
                do
                {
                    w = Console.ReadLine();
                    

                } while (!w.All(char.IsLetter) || w.Length < 1 || w.Length > 100);

                if (w.Length > 10)
                {
                    string s1 = w.Substring(0, 1);
                    string s3 = w.Substring(w.Length - 1, 1);
                    int s2 = w.Length - 2;
                    Console.WriteLine(s1 + s2 + s3);
                }
                else
                {
                    Console.WriteLine(w);
                }
            }
        }
    }
}
