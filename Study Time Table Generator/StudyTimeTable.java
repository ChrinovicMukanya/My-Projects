//Under Development 

import java.util.Random;
import java.util.Scanner;
import java.util.ArrayList;

public class StudyTimeTable
{
    public static void generateRandomSubject(String subjectsList[]){
        
        Random randomIntegerValue = new Random();
        int randomArrayIndex = randomIntegerValue.nextInt(subjectsList.length);

        String randomSubject = subjectsList[randomArrayIndex];
        System.out.println(randomSubject);
    }
    public static void generaterRandomTwoSubject(){

        Scanner scanner = new Scanner(System.in);
        ArrayList<String> subjects = new ArrayList<String>();
        String subjectsList[];

        System.out.println("How many subjects will you be studying ");
        int numberOfTotalSubjects = scanner.nextInt();

        int numberOfSubjectsInserted = 0;

        while (numberOfSubjectsInserted < numberOfTotalSubjects){
            System.out.println("Insert subject");
            String subject = scanner.nextLine();

            subjects.add(subject);
            numberOfSubjectsInserted++;
        }
        for (int x = 0; x < subjects.size(); x++){
            for(int y = 0; y < subjectsList.length; y++){
                subjectsList[y] = subjects.get(x);
            }
        }
        int numberOfSubjectsPerDay = 2;
        int subjectCounted = 0;

        while (subjectCounted < numberOfSubjectsPerDay){
            generateRandomSubject(subjectsList);
            subjectCounted++;      
        }
    }
    public static void main(String [] args){

        String[] days = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};

        int numberOfDays = 5;
        int daysCounted = 0;

        while (daysCounted < numberOfDays){

            String day = days[daysCounted];
            System.out.println(day.toUpperCase());

            generaterRandomTwoSubject();
            System.out.println();
            daysCounted++;

        }
    }
}
