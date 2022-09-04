using System;
namespace cSharp
{
class Program
    {
static void Main(string[] args)
      {
            Console.Clear();
            
            // Abstract class 
            {
            // class2 c1 = new class2();
            // c1.fun();
            // c1.non_abstract_function();
            // Console.WriteLine(c1.x);
            // Console.WriteLine(c1.value);
            }
            //interface in c#
            {
                // I_derivedClass i = new I_derivedClass();
                // i.fun();
            }
            //Sealed
            {
            //    Sealed_Class c = new Sealed_Class();
            //     c.fun();
            //     Console.WriteLine(c.h);
            //     A a = new A();
            //     a.fun();
            //     B b = new B();
            //     b.fun();

            }
            //string
            {
                // Str s = new Str();
                // Console.WriteLine(s.s1);
                // Console.WriteLine(s.s2);
                // Console.WriteLine( string.Compare(s.s1,s.s2));
                // Console.WriteLine(string.Concat(s.s1,s.s2));
                // Console.WriteLine(Equals(s.s1,s.s2));
                // Console.WriteLine(s.s1.Contains('i'));
                // Console.WriteLine(s.s1.Contains("it"));
                // Console.WriteLine(s.s1.ToUpper());
                // Console.WriteLine(s.s1.GetType());
                // Console.WriteLine(s.s1.IndexOf('t'));
            }
            
            // lists
            {
                    //string list
                // var names = new List<string>();
                // names.Add("hero");
                // names.Add("villian");
                // names.Add("comedian");
                // names.Insert(1,"main villian");
                // names.RemoveAt(1);

                // foreach(string s in names)
                // {
                //     Console.WriteLine(s);
                // }

                    //object variable
                // ListClass l1 =new ListClass(1);
                //  ListClass l2 =new ListClass(2);
                //   ListClass l3 =new ListClass(3);
                //    ListClass l4 =new ListClass(4);

                // var objects = new List<ListClass>();
                // objects.Add(l1);
                // objects.Add(l2);
                // objects.Add(l3);
                // objects.Add(l4);
                // foreach(ListClass l in objects)
                // {
                //     l.show();
                // }
                
            }

            //hashset 
            {
            // var str=new HashSet<string>();
            // str.Add("simran");
            // str.Add("vikrant");
            // str.Add("simran");
            // foreach(string s in str)
            // {
            //     Console.WriteLine(s);
            // }
            }

            // stacks
            {
                // var Stk = new Stack<string>();
                // Stk.Push("mobile");
                // Stk.Push("laptop");
                // Stk.Push("watch");
                // Stk.Pop();
                // Stk.Push("keyboard");
                // foreach(string s in Stk)
                // {
                //     Console.WriteLine(s);
                // }

            }

            {
            //     var Llist=new LinkedList<string>();
            //     Llist.AddFirst("four");
            //     Llist.AddLast("five");
            //    // Llist.AddFirst("three");
            //     Llist.AddFirst("two");

            //     LinkedListNode<string> node = Llist.Find("two");
            //     Llist.AddAfter(node,"three");
            //     Llist.AddBefore(node,"one");

            //     foreach(string s in Llist)
            //     {
            //         Console.WriteLine(s);
            //     }

            }

            // dictionary
            {
                 var names = new Dictionary<string, string>();  
        names.Add("1","Sonoo");  
        names.Add("2","Peter");  
        names.Add("3","James");  
        names.Add("4","Ratan");  
        names.Add("5","Irfan");  
  
        foreach (KeyValuePair<string, string> kv in names)  
        {  
            Console.WriteLine(kv.Key+" "+kv.Value);  
        }  
            }
     
      }
    }
}