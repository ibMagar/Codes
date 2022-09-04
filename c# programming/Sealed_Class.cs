using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace cSharp
{
    public sealed class Sealed_Class
    {
        public void fun()
        {
            Console.WriteLine("This is the function inside the sealed class");
        }
        public string h = "Hello";
    }
    public class A{
        public virtual void fun()
        {
            Console.WriteLine("this is the function inside normal func which will be overriden and sealed");
        }
    }
    public class B:A{
        public sealed override void fun()
        {
            Console.WriteLine("this is sealed function");
        }
    }
   
    
}