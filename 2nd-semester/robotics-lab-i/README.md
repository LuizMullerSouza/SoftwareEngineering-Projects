# 🤖 2nd Semester - Robotics Lab I
### Projects with LEGO MINDSTORMS EV3

Hello! Documented here are all the files and projects I developed for the Robotics I course, part of my Software Engineering degree at UNIGRAN.

This repository was created over a semester with the goal of visualizing, sharing, and, above all, advancing my learning in block-based programming and robot control logic. I hope you enjoy exploring the challenges!

---

### Want to Test the Code? Follow the Information Guide!

To help you experiment, modify, and run these projects on your own robot, I've prepared a simple and complete guide below. To ensure everything works perfectly, let's start by setting up your environment.

#### Step 1: Install the Necessary Tools

Before downloading the projects, you'll need two essential tools on your computer.

**A) Git Installation (Optional)**

Git is the system we use to manage and share code. If you don't have it installed, follow these steps:
1.  **Access the official website:** Go to [git-scm.com/downloads](https://git-scm.com/downloads).
2.  **Download the Installer:** The website will detect your operating system (Windows or macOS) and suggest the correct download. Click to download.
3.  **Run the Installation:** Open the file you downloaded. You can simply click "Next" through all the windows, keeping the default options. You don't need to change anything.
4.  **Verify the Installation:** After it's finished, open a new terminal (like Git Bash on Windows) and type `git --version`. If the Git version appears, the installation was a success!

**B) LEGO EV3 Classroom Installation (Required)**

This is the required software to open and edit the `.imsp` files.
1.  **Go to the download page:** Click the official link: **[Download LEGO MINDSTORMS EV3 Classroom](https://education.lego.com/en-us/downloads/mindstorms-ev3/software/)**.
2.  **Choose Your Operating System:** On the page, select the correct version for your computer (Windows or macOS).
3.  **Download and Run:** The installer download will begin. When finished, double-click the file to start it.
4.  **Follow the Instructions:**
    * Click **Next**.
    * **Accept the Terms** of service when prompted.
    * Continue clicking **Next** until the end.
    * Click **Finish** to complete the installation.
5.  **Done!** The software should now be ready to run from your Start Menu or Applications folder.

---

#### Step 2: Get the Project Files

Now that the tools are installed, you need a copy of the projects.

**Option 1: Direct Download**

If you don't want to use the terminal, this is the simplest method:
1.  On the main page of this repository, click the green **`< > Code`** button.
2.  In the menu that appears, click **`Download ZIP`**.
3.  Save the file and unzip the folder on your computer.

**Option 2: Cloning with Git**

If you've completed the Git installation, this method allows you to easily update the projects in the future:
1.  Open your terminal (Git Bash, PowerShell, etc.).
2.  Navigate to the directory where you want to save the projects.
3.  Run the following command to clone the repository:
    ```bash
    git clone [https://github.com/LuizMullerSouza/SoftwareEngineering-Projects.git](https://github.com/LuizMullerSouza/SoftwareEngineering-Projects.git)
    ```
4.  This will create a `SoftwareEngineering-Projects` folder with all the content.

---

#### Step 3: Open and Run a Project

With everything ready, let's see the magic happen:
1.  Open the **EV3 Classroom** application.
2.  In the top menu, go to `File > Open`.
3.  Navigate to the project folder you want to test (e.g., `robotics-lab-i/circular-rescue-mission/`).
4.  Select the file with the `.imsp` extension (e.g., `circular-rescue-mission.imsp`). The block-based code will appear on the screen.
5.  Connect your EV3 robot to the computer and click the "Download and Run" button in the software.
6.  **Important Note:** Remember that all values and settings in my code (motor ports, sensor values, speed) are specific to my robot. You will likely need to adjust these values for the program to work correctly with your own build.

---

## 📂 Featured Projects

Below are 5 of the most challenging projects from this lab, which demonstrate more complex programming logic and advanced concepts in autonomous robotics.

* **[circular-rescue-mission](./circular-rescue-mission/)**: A complete autonomous system for competitions, combining navigation in a restricted area, object search and manipulation, and decision-making to meet a complex set of rules. This project demonstrated high-level performance, achieving a perfect score in the challenge.

* **[hybrid-navigation-logic](./hybrid-navigation-logic/)**: An implementation of an advanced control architecture with state switching. The robot executes an autonomous patrol behavior and, upon detecting a specific stimulus (a line), dynamically changes its task to a line-following mode, demonstrating hybrid navigation logic.

* **[obstacle-aware-line-follower](./obstacle-aware-line-follower/)**: An evolution of the classic line follower, this project adds a layer of robustness and environmental awareness. The robot not only follows a path but is also capable of detecting unexpected interruptions (obstacles), pausing its main task, and safely continuing.

* **[multi-sensor-navigation](./multi-sensor-navigation/)**: Demonstrates the fusion of data from multiple sensors (touch and color) for navigation in an unknown environment. The robot uses the combined information to make real-time decisions, such as avoiding boundaries and identifying the mission's stop condition.

* **[line-tracking-robot](./line-tracking-robot/)**: An implementation of the fundamental line-following algorithm using color sensor feedback for closed-loop control. The robot continuously adjusts its trajectory to correct errors, demonstrating the basis for more complex guided navigation systems.

---

### 👨‍💻 Author

Thanks for checking out this project! Great programming logic to all!

* **GitHub:** [LuizMullerSouza](https://github.com/LuizMullerSouza)
* **Instagram:** [@luizmullerz](https://www.instagram.com/luizmullerz/)

Happy coding!