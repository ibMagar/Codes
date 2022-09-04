using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace cSharp
{
    public abstract class abstractClass
    {
       public abstract void fun();
       public void non_abstract_function()
       {
            Console.WriteLine("This is non-abstract function inside the abstract class");
       }
       public int x=100;
       public string value="This is the field inside the abstarct class";

    }
    public class class2:abstractClass{
        public override void  fun()
        {
            Console.WriteLine("Fun");
        }
    }
}