using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace cSharp
{
    public interface Iinterface
    {
        void fun();
       
    }
    public class I_derivedClass:Iinterface{
        public void fun()
        {
            Console.WriteLine("This is the function declaration of the interface");
        }
    }
}