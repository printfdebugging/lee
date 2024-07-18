#include "editor.hpp"
#include "logger.hpp"


int main()
{
    Editor aEditor;
    if (!aEditor.initialize("assets/config"))
        ERROR("Failed to initialize Editor")

    aEditor.run();
}
