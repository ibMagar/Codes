using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace cSharp
{
    public class ListClass
    {
         int x;
        public ListClass(int x)
         {
            this.x=x;
         }
         public void show()
         {
            Console.WriteLine(this.x);
         }
    }
}