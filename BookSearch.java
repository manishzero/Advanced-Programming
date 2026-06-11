import java.util.ArrayList;
import java.util.Scanner;

public class BookSearch {
    public static void main(String[] args) {

        // Create ArrayList to store book titles
        ArrayList<String> books = new ArrayList<>();

        // Add at least 5 books
        books.add("Introduction to Java Programming");
        books.add("Data Structures and Algorithms");
        books.add("Operating System Concepts");
        books.add("Computer Networks");
        books.add("Database Management Systems");

        // Take input from user
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter word to search: ");
        String keyword = sc.nextLine().toLowerCase();

        System.out.println("\nBooks containing \"" + keyword + "\":");

        // Search for books containing the word
        boolean found = false;
        for (String book : books) {
            if (book.toLowerCase().contains(keyword)) {
                System.out.println(book);
                found = true;
            }
        }

        if (!found) {
            System.out.println("No matching books found.");
        }

        sc.close();
    }
}
