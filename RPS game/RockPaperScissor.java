import java.util.Random;
import java.util.Scanner;
import javax.swing.JOptionPane;

public class RockPaperScissor 
{
    private static String generateRandomValue(String[] array){// Function generates random value in an array
        if (array == null || array.length == 0){
            return null;
        }
        Random random = new Random();
        int randomIndex = random.nextInt(array.length); 
        String randomValue = array[randomIndex];

        return randomValue;
    }
    //Message if user won
    private static void userWon(){
        JOptionPane.showMessageDialog(null, "You Win!!!");
    }
    private static void userLost(){
        JOptionPane.showMessageDialog(null, "You Loose, Computer wins!");
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int numberOfTurns = 5;
        int turnsPlayed = 0;
        int score = 0;

        while (turnsPlayed < numberOfTurns){

            String[] gameOptions = {"Rock", "Paper","Scissor"};
            String computerChoice = generateRandomValue(gameOptions);

            System.out.println();
            String userChoice = JOptionPane.showInputDialog("Rock Paper or Scisssor");
            turnsPlayed++;

            System.out.println();
            JOptionPane.showMessageDialog(null,"The computers choice is : " + computerChoice);

            if (userChoice.equalsIgnoreCase(computerChoice)){
                continue;
            }
            else if(userChoice.equalsIgnoreCase("Rock") && computerChoice.equals("Sicssor")){
                userWon();
                score+= 1;
                computerChoice = generateRandomValue(gameOptions);
            }
            else if (userChoice.equalsIgnoreCase("Scissor") && computerChoice.equals("Rock")){
                userLost();
                computerChoice = generateRandomValue(gameOptions);
            }
            else if (userChoice.equalsIgnoreCase("Paper") && computerChoice.equals("Scissor")){
                userLost();
                computerChoice = generateRandomValue(gameOptions);
            }
            else if (userChoice.equalsIgnoreCase("Rock") && computerChoice.equals("Paper")){
                userLost();
                computerChoice = generateRandomValue(gameOptions);
            }
            else if (userChoice.equalsIgnoreCase("Paper") && computerChoice.equals("Rock")){
                userWon();
                score=+ 1;
                computerChoice = generateRandomValue(gameOptions);
            }
            else if (userChoice.equalsIgnoreCase("Scissor") && computerChoice.equals("Paper")){
                userWon();
                score=+ 1;
                computerChoice = generateRandomValue(gameOptions);        
            }
            else{
                JOptionPane.showMessageDialog(null,"Choose Rock paper of scissor");
                break;
            }if (turnsPlayed == numberOfTurns){
                break;
            }
        }
        JOptionPane.showMessageDialog(null,"Game Over, Thanks for playing :)");
        JOptionPane.showMessageDialog(null,score + "/5");    
        
    }
}
