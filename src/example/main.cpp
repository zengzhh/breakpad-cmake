#include <cstdio>
#include "client/windows/handler/exception_handler.h"

bool callback(const wchar_t* dump_path, const wchar_t* id,
    void* context, EXCEPTION_POINTERS* exinfo,
    MDRawAssertionInfo* assertion,
    bool succeeded) {
    (void)dump_path;
    (void)context;
    (void)exinfo;
    (void)assertion;
    if (succeeded) {
        printf("dump guid is %ws\n", id);
    }
    else {
        printf("dump failed\n");
    }
    return succeeded;
}

int mydiv(int x, int y) {
    int z;
    z = x / y;
    return z;
}

void simulate_crash() {
    printf("9/0=%d\n", mydiv(9, 0));  //crash here
}

int main() {
    google_breakpad::ExceptionHandler eh(
        L".", NULL, callback, NULL,
        google_breakpad::ExceptionHandler::HANDLER_ALL);
    printf("call func");
    simulate_crash();
    printf("bye");
    return 0;
}