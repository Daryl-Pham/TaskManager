# TaskManager
"Task Manager" – a simple application to manage a task list. This project allows you to get familiar with the basic concepts of C++ and the process of building a graphical interface using Qt Widgets. Below is a detailed description: 

1. Project Description: 

The Task Manager application will allow users to: 

Add new tasks. 

View a list of tasks. 

Mark tasks as completed. 

Delete tasks. 

2. Key Features: 

Main Interface: 

Display the task list (using QListWidget). 

Buttons for adding (QPushButton), deleting, and updating the status of tasks. 

Add Task: 

A dialog (QDialog) that allows users to input the task name and detailed description (using QLineEdit and QTextEdit). 

Update Status: 

Each task can be marked as completed using a checkbox (QCheckBox) 

Task Storage: 

Tasks are stored temporarily in runtime using a simple Task class (C++ class), with attributes like name, description, and isCompleted. 

Delete Task: 

Allows users to remove unnecessary tasks. 

3. Learning Components from the Project: 

Basic C++: 

Declaring classes, member functions, and working with pointers and references. 

Using data structures such as vector and list to manage tasks. 

Qt Widgets: 

Understanding how to use interface elements (widgets) like QPushButton, QListWidget, QLineEdit, QTextEdit, QCheckBox, and handling events (event handling). 

Working with layouts in Qt to organize the user interface. 

Signals and Slots: 

Learning about Qt's signal-slot mechanism to connect user interface actions with logic handling. 

4. Expansions (Optional): 

4.1. Task Storage to File: 

Save and load tasks from a file: Use QFile, QTextStream, or JSON (QJsonDocument) to store the task list on disk. 

4.2. Filtering: 

Filter tasks: Provide filtering options to view tasks by status (completed/incomplete). 

4.3. Add Deadlines: 

When creating a task, allow users to set a deadline using QDateEdit or QCalendarWidget. 

Display the deadline for each task in the list and highlight tasks that are nearing or have passed their deadline. 

4.4. Notifications: 

Reminders: Add a notification feature (pop-up) when a task is approaching its deadline or has passed. 

Use QTimer to periodically check task deadlines. 

4.5. Task Priority: 

Assign priority levels to each task (High, Medium, Low). 

Allow users to sort tasks by priority or highlight them with different colors based on priority. 

4.6. Add Menu and Toolbar: 

Add a menu bar (QMenuBar) with options like "File" (Open, Save) 

4.7. Multithreading: 

If the application handles many tasks or interacts with files with noticeable delays, you can use QThread to perform some heavy tasks in the background without affecting the UI. 

4.8. Use SQLite Database: 

Instead of storing tasks in files, use a database like SQLite to store data. 

Use QSqlDatabase and QSqlQuery to interact with the database (add, delete, update tasks) 

 
