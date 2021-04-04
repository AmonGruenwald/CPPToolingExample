# CPPToolingExample
Shows a simple project setup using various useful tools.

This project is mainly meant for myself to copy when starting new project so I don't have to do the setup from scratch everytime.

## Tools used:
### CMake
Build system. Also used to link together library and demo, and library and tests. 
CMake also allows to pull Catch2 directly from github so no further setup is need for that. It can additionaly convert the Catch2 Tests to it's own ctest framework by using ```catch_discover_tests()``` which is useful when wanting to automatically test with Github Actions.
### Catch2
Unit test framework with really intuitive workflow. 
### Doxygen
Automatically creates documentation from Javadoc style comments. Used to document the library. 
### Github Pages
Service that Github provides to continiously deploy webpages from a repo. In this case it uses the special ```gh-pages``` branch to host the [Doxygen documentation](https://amonshokhinahmed.github.io/CPPToolingExample/).
### Github Action
Two actions are used. One to configure, build and test the project (using ctest as discussed earlier). The other one builds the Doxygen documentation and publishes just the built folder to the ```gh-pages``` branch to update the documentation with each push. 
### clang-format
Simple customizable way to publish code.
