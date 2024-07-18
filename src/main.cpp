#include "editor.hpp"
#include "logger.hpp"


int main()
{
    Editor aEditor;
    if (!aEditor.initialize())
        ERROR("Failed to initialize Editor")

    aEditor.run();
}
