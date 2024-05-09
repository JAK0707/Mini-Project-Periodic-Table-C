# Mini-Project-Periodic-Table-C



  <p>This C program provides information about elements in the periodic table. It allows users to input the atomic
        number of an element and displays its name, group number, period number, and state of matter.</p>

  <h2>How to Use</h2>
    <ol>
        <li>Clone the repository to your local machine:</li>
        <pre><code>git clone https://github.com/JAK0707/Mini-Project-Periodic-Table-C.git</code></pre>
        <li>Navigate to the project directory:</li>
        <pre><code>cd Mini-Project-Periodic-Table-C</code></pre>
        <li>Compile the program using a C compiler such as <code>gcc</code>:</li>
        <pre><code>gcc -o periodic_table periodic_table.c</code></pre>
        <li>Run the compiled executable:</li>
        <pre><code>./periodic_table</code></pre>
        <li>When prompted, enter the atomic number of the element you want to learn about.</li>
        <li>View the information displayed about the element, including its name, group number, period number, and state
            of matter.</li>
    </ol>

   <h2>Program Structure</h2>
    <ul>
        <li>The program uses structures to represent elements of the periodic table. Each structure contains fields for
            the name, atomic number, group number, period number, and state of matter of an element.</li>
        <li>The main function prompts the user to input an atomic number.</li>
        <li>If the input atomic number is valid (between 1 and 118), the program displays information about the
            corresponding element using the <code>displayElement</code> function.</li>
        <li>The <code>displayElement</code> function takes an array of structures containing information about all
            elements and the atomic number of the element to display its information.</li>
    </ul>

  <h2>Files</h2>
    <ul>
        <li><code>periodic_table.c</code>: The C source code file containing the program logic.</li>
    </ul>

  <h2>Requirements</h2>
    <ul>
        <li>C Compiler (e.g., GCC)</li>
    </ul>
