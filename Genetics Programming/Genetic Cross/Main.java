import java.util.Scanner;

public class Main
{
    public static void geneCross(String xGenetype,String xPhenotpe, String yGenotype, String yPhenotype){
        char xGenetypeSequance[] = xGenetype.toCharArray();
        char[] xGenetypeSequanceArray = new char[2];

        for(char xAllele : xGenetypeSequance){
            for (int x = 0; x < xGenetypeSequanceArray.length; x++){
                xGenetypeSequanceArray[x] = xAllele;
            }
        }
//for (int x = 0; x < xGenetypeSequanceArray.length; x++){
  //          System.out.println(xGenetypeSequanceArray[x]);
        char yGenotypeSequance[] = yGenotype.toCharArray();
        char[] yGenotypeSequanceArray = new char[2]; 

        for(char yAllele : yGenotypeSequance ){
            for (int x = 0; x < yGenotypeSequanceArray.length; x++){
                yGenotypeSequanceArray[x] = yAllele;
            }
        }
  //      for (int x = 0; x < yGenotypeSequanceArray.length; x++){
    //        System.out.println(yGenotypeSequanceArray[x]);
      //  }
      for(int x = 0; x < xGenetypeSequanceArray.length; x++){
        for(int y = 0; y < yGenotypeSequanceArray.length; y++){
            System.out.println(xGenetypeSequanceArray[x] + "" + yGenotypeSequanceArray[y]);
        }
      }
    }
    public static void main(String []args){
        Scanner scanner  = new Scanner(System.in);//

        System.out.println("Insert X Genotype : ");
        String xGenetopye = scanner.nextLine();
        System.out.println("Insert X Phenotype : ");
        String xPhenotype = scanner.nextLine();

        System.out.println();

        System.out.println("Insert Y Geneotype : ");
        String yGeneotype = scanner.nextLine();

        System.out.println("Insert Y Phenotype : ");
        String yPhenotype = scanner.nextLine();

        geneCross(xGenetopye, xPhenotype, yGeneotype, yPhenotype);

    }
        
    }
