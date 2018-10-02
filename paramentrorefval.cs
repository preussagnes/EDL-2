using System;
					
public class Program
{
	public static void Main(String [] agrs)
	{
		Pessoa A = new Pessoa(100 ,"Jhonatan");
		Console.WriteLine(A.Idade + " " +A.Nome);
		
		MudaPessoa(A);
		Console.WriteLine(A.Idade + " " +A.Nome);
			
	}
	
	public static void MudaPessoa(Pessoa Pes)
		{
		Pes.Idade = 360;
		Pes.Nome = "JOJO";
	
		}
		
}


public class Pessoa
	{
	public int Idade;
	public string Nome;

	public Pessoa(int A, string N)
		{
		Idade = A;
		Nome = N;
		}
	}