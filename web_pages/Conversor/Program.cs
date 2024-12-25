using System;
using System.Text;

class Program
    {
        static void Main(string[] args)
        {
            byte[] todosOsBytes = File.ReadAllBytes(@"captive-penegui.html.gz");

            string resultado = System.Convert.ToBase64String(todosOsBytes);

            var teste = ByteArrayToString(todosOsBytes);           

            Console.WriteLine(teste);
        }

        public static string ByteArrayToString(byte[] ba)
        {
            StringBuilder hex = new StringBuilder(ba.Length * 2);
            foreach (byte b in ba)
                hex.AppendFormat("0x{0:x2}, ", b);
            return hex.ToString();
        }
    }
