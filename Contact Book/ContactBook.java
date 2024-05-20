import java.util.Scanner;
import java.lang.String;

class Contact{
    String name;
    int phoneNumber;

    public Contact(String name, int phoneNumber){
        this.name = name;
        this.phoneNumber = phoneNumber;
    }
}

class ContactsList{
    Contact[] contactList;
    static int count; 
    public static void searchContact(Contact contactlist[],String nameToSearch){
        for (Contact item : contactlist){
            if ((item.name).equalsIgnoreCase(nameToSearch)){
                System.out.println("Name : " + item.name + "\nNumber : " + item.phoneNumber);
            }
        }
    }
    
    public static void addNewContact(Contact[] contactList, Contact newContactToAdd){
        if(contactList.length == count){
            Contact[] newContactList = new Contact[contactList.length + 1];
            for(int x = 0; x < count; x++){
                newContactList[x] = contactList[x];
            }contactList = newContactList;
        }
        contactList[count] = newContactToAdd;
        count++;
    }
}
public class ContactBook  
{
    public static void main(String[] args) {
        Scanner scanner = new Scanner (System.in);

        System.out.println("Insert Number of contact you want to add");
        int numberOfContact = scanner.nextInt();
        scanner.nextLine();
        Contact[] contactlist = new Contact[numberOfContact];
        int numOfContactsInserted = 0;

        while(numOfContactsInserted != numberOfContact){
            System.out.println("Insert Name : ");
            String contactName = scanner.nextLine();

            System.out.println("Insert PhoneNumber :");
            int contactPhoneNumber = scanner.nextInt();
            scanner.nextLine();

            contactlist[numOfContactsInserted] = new Contact(contactName, contactPhoneNumber);
            numOfContactsInserted++;

        }
        for (Contact contact : contactlist){
            System.out.println("Name : " + contact.name + "\nNumber" + contact.phoneNumber);
        }




        
    }
}