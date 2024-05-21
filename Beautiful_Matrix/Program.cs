using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Beautiful_Matrix
{
    class Program
    {
        static void Main(string[]  args)
        {
            string[,] M = new string[5,5];
            string aux;
            //string r;
            int count = 0;
            int x=0, y=0;
            for (int i = 0; i < 5; i++)
            {
                aux = Console.ReadLine();
                string[] m = aux.Split(' ');
                for(int j = 0; j < 5; j++)
                {
                    M[i, j] = m[j];
                    if (M[i, j] == "1")
                    {
                        x = i;
                        y = j;
                    }
                }
            }


            while (x != 2 || y !=2)
            {
                if (x > 2)
                {
                    x--;
                    count++;
                }
                if (y > 2)
                {
                    y--;
                    count++;
                }
                if (x < 2)
                {
                    x++;
                    count++;
                }
                if (y < 2)
                {
                    y++;
                    count++;
                }
            }

            /*if (M[2, 2] != "1")
            {
                r = M[2, 2];
                M[2, 2] = M[x, y];
                M[x, y] = r;
            }*/

            Console.WriteLine(count);
            
            Console.ReadKey();
        }
    }
}
