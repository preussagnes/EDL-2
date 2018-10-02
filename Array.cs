using System;

public class Program
{
	public static void Main(String [] agrs)
	{
		Console.WriteLine("Escreva o tamanho do array:");
		int N = Convert.ToInt32(Console.ReadLine());
		int[] Array = new int[N];
		
		Console.WriteLine("O tamanho do arry eh:");
		Console.WriteLine(Array.Length);
		
	}
}