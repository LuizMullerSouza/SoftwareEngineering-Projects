# 🖥️ 1st Semester - Programming Lab I

Hello! This folder contains the projects and exercises I developed for the Programming Lab I course during the first semester of my Software Engineering degree, using the **C language**.

Unlike interpreted languages, C is a **compiled** language. This means that to run the code, you first need a special program called a **compiler** to transform the source code (`.c`) into an executable file (`.exe` on Windows).

The simplest way to do this is by using an IDE that already includes a compiler. For these projects, the recommendation is **Code::Blocks**.

---

### 📂 How the Projects Are Organized

To help you navigate the content, each folder for this course is organized using the following structure:

* **Folder Naming:** `programminglanguage-topic`
* **File Naming:** Inside each folder, you will find files with simple and direct names that describe their purpose.
* **Problem Statement:** At the end of each source code file, you will find a comment block containing the full problem statement or challenge that the code was designed to solve.

Your own project or challenge might be different, but I'll be incredibly grateful if you use my content as a foundation for learning. Keep coding, and you'll become a giant in your own right!

---

### 🚀 Guide to Running the C Projects

To compile and run the code from this repository, the easiest path is to install Code::Blocks, which comes with everything you need.

#### Step 1: Install the Necessary Tools

**A) Git Installation (Optional)**

Git is the system we use to manage and share code.
1.  **Access the official website:** Go to [git-scm.com/downloads](https://git-scm.com/downloads).
2.  **Download the Installer:** The website will detect your operating system (Windows or macOS) and suggest the correct download. Click to download.
3.  **Run the Installation:** Open the file you downloaded. You can simply click "Next" through all the windows, keeping the default options.
4.  **Verify the Installation:** After it's finished, open a new terminal (like Git Bash on Windows) and type `git --version`. If the Git version appears, the installation was a success!

**B) C Environment Installation (Required)**

The instructions vary depending on your operating system.

**1.1 For Windows Users:**

You can install Code::Blocks and the compiler all at once.
1.  **Access the official website:** Go to [www.codeblocks.org/downloads/binaries](http://www.codeblocks.org/downloads/binaries/).
2.  **Find the Correct Installer:** In the "Windows" section, look for the file whose name includes **`mingw-setup.exe`** (e.g., `codeblocks-20.03mingw-setup.exe`). This version comes with the compiler included.
3.  **Run the Installation:** Open the file and click "Next" through all the windows, keeping the default options.

**1.2 For macOS Users:**

The process has two parts: installing Apple's command-line tools (which include the Clang C compiler) and then installing Code::Blocks.
1.  **Install the Compiler (Xcode Command Line Tools):**
    * Open the **Terminal** app (you can find it in `Applications/Utilities`).
    * Type the following command and press Enter:
      ```bash
      xcode-select --install
      ```
    * A pop-up window will appear. Click "Install" and follow the instructions.
    * To verify it worked, type `clang --version` in the terminal. If a compiler version appears, you're all set.
2.  **Install Code::Blocks:**
    * Go to the official website: [www.codeblocks.org/downloads/binaries](http://www.codeblocks.org/downloads/binaries/).
    * In the "Mac OS X" section, click the link to download the `.dmg` file.
    * Open the downloaded `.dmg` file and drag the Code::Blocks icon to your "Applications" folder.

---

#### Step 2: Get the Project Files

First, you need a copy of the projects on your computer.

**Option 1: Direct Download**

1.  On the main page of this repository, click the green **`< > Code`** button.
2.  In the menu that appears, click **`Download ZIP`**.
3.  Save the file and unzip the folder on your computer.

**Option 2: Cloning with Git**

To use this option, you need to have Git installed, as shown in **Step 1**.
1.  Open your terminal (Git Bash, PowerShell, etc.).
2.  Navigate to the directory where you want to save the projects.
    * Use the `cd` (change directory) command to enter the desired folder. The safest way to do this is by using the **absolute path**.

    * **How to find the absolute path:** <br>
        2.1  Open your file explorer. <br>
        2.2  Create or find the folder where you want to save the project. <br>
        2.3  Click on the address bar at the top of the window, and the full path will be displayed. <br>
        2.4  Run the command: <br>

        * **On Windows**
            ```bash
            cd "C:/Users/YourUser/PathToFolder/FolderName"
            ```
        * **On macOS**
            ```bash
            cd "/Users/YourUser/PathToFolder/FolderName"
            ```

3.  Run the following command to clone the repository:
    ```bash
    git clone [https://github.com/LuizMullerSouza/SoftwareEngineering-Projects.git](https://github.com/LuizMullerSouza/SoftwareEngineering-Projects.git)
    ```
4.  This will create a `SoftwareEngineering-Projects` folder with all the content inside the directory you chose.

---

#### Step 3: Compile and Run a Project in Code::Blocks

With everything ready, let's run some code:
1.  Open **Code::Blocks**.
2.  In the top menu, go to `File > Open...`.
3.  Navigate to the project folder you want to test (e.g., `.../folder/subject/content/`).
4.  Select one of the files with the **`.c`** extension (e.g., `file-name.c`).
5.  With the code open, look for the **"Build and run"** button in the toolbar (icon with a gear and a green play triangle).
6.  **Done!** Code::Blocks will compile the code and open a black console window where the program will run and you can interact with it.

Now you are ready to explore and test all the C projects!

---

### 👨‍💻 Author

Thanks for checking out this project! Great programming logic to all!

* **GitHub:** [LuizMullerSouza](https://github.com/LuizMullerSouza)
* **Instagram:** [@luizmullerz](https://www.instagram.com/luizmullerz/)

Happy coding!