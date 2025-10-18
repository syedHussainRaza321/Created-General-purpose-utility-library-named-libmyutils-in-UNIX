created a general-purpose utility library named libmyutils. This library will be composed
of two modules:

• String Functions: It will provide custom implementations of common string manipulation
functions.
• File Functions: It will provide utility functions for file-based operations, like counting words
or searching for a pattern.

 Wrote a driver program that utilizes functions from both modules. By building and
linking this library first statically and then dynamically,Directly observed the trade-offs
involved and analyze the resulting executables to see the linker's work firsthand.


• Modular Programming: Structuring C code into reusable modules with separate header
(.h) and source (.c) files.
• Static & Dynamic Libraries: Compiling object files and creating both static (.a) and
dynamic (.so) libraries.
• The Linking Process: Understanding the roles of the -I (include), -L (library path), and -l
(link library) flags to connect your program with your libraries.
• Build Automation: Writing a flexible and efficient Makefile(s) to manage the entire
compilation, linking, and installation workflow for multiple targets.
• Documentation: Creating standard Linux man pages to document your library's functions
and programs.
• Binary Analysis: Using tools like nm, ar, readelf, and ldd to inspect libraries and
executables.
• Version Control Workflow: Applying git for project setup, using branches for features,
merging completed work, and maintaining a clean project history.
• Software Releasing: Using git tags to mark stable versions of your project and creating
official, downloadable releases on GitHub with compiled assets.
