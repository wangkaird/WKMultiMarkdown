#ifdef __OBJC__
#import <Cocoa/Cocoa.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "d_string.h"
#import "token.h"
#import "WKMultiMarkdown.h"

FOUNDATION_EXPORT double WKMultiMarkdownVersionNumber;
FOUNDATION_EXPORT const unsigned char WKMultiMarkdownVersionString[];

