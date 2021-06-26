class Library:
    def __init__(self,list,name):
        self.booksList = list
        self.name = name
        self.lendDict = {}


    def displaybooks(self):
        print(f"We have following books in our library:  {self.name}")
        for book in self.booksList:
            print(book)

    def lendbook(self,user,book):
        if book not in self.lendDict.keys():
            self.lendDict.update({book:user})
            print("Lender-Book database has been updated. You can take the book now")
        else:
            print(f"Book is already taken by {self.lendDict[book]}")
    

    def addbook(self,book):
        self.booksList.append(book)
        print("Book has been added to the book list")
 
    def returnBook(self,book):
        self.lendDict.pop(book)

if __name__ == '__main__':
    harry = Library(['Python',"Rich dad poor dad","C++","science","bipography"],"CodeWithHarry")
    while(True):
        print(f"Welcome to the {harry.name} library. Enter your choice to continue")
        print("1. Display books")
        print("2. Lend a book")
        print("3. Add a book")
        print("4. Return a book")

        user_choice = int(input())

        if user_choice == 1:
            harry.displaybooks()
        elif user_choice == 2:
            book = input("Enter the name of the book you want\n")
            name = input("Enter your name\n")
            harry.lendbook(name,book)

        elif user_choice == 3:
            book = input("Enter the name of the book\n")
            harry.addbook(book)
        elif user_choice == 4:
            book = input("Enter the name of the book you want to return\n")
            harry.returnBook(book)
        else:
            print("Not a valid option\n")

        print("Press q to quit or c to continue\n")
        user_choice2 = ""
        while(user_choice2 != "c" and user_choice2!="q"):
            user_choice2 = input()

            if user_choice2 == "q" :
                print("Thanks for coming to our library")
                exit()

            elif user_choice2 == "c":
                continue


