# freeDOM
My idealization (is that even a word?) of the Web.

## So much bloat
I can sum up my frustrations in one sentence:
**The Web hangs onto the cruft of years past.**

Obviously, it's unrealistic to completely rewrite the Web,
but for our purposes, let's just do it anyways.

## Document Model
It sucks. Need I say more?
Actually, to be specific - HTML itself is fine for the most part,
but the JavaScript DOM sucks, and it's mostly just because JavaScript sucks.
Things like `arguments` not bein actual arrays, `===`, etc... It just makes no sense
why we need to use that.

One really nice feature would be built-in document patching features, so that
there would be no need for a virtual DOM. Something like an in-built `incremental_dom`
would go a long way to making things convenient, and fast.

## Goodbye, JavaScript
JavaScript sucks. It's poorly-designed, has a lot of nonsensical rules,
and hangs onto the cruft of years past.

My honest opinion is that a *text-based* scripting engine is not the right
fit for the Web. Something like WebAssembly, or another binary IR, is better
suited for that. Things I find ideal, some of which aren't present in WASM, either:
* Versioning - i.e. a binary produced by WebC 1.1.3 would indicate in a header that
it was produced by WebC 1.1.3. This makes it much easier to add new features to
WebRuntime without breaking existing applications. No more "hanging onto the cruft
of years past." Users would also easily know that they needed to upgrade their browser
to use newer sites.

## Actual Host Bindings
At this point, WebAssembly doesn't have host bindings, so using DOM, other API's, etc.,
requires interop with JavaScript. This is a major WTF for me, and makes WebAssembly only
really useful for people using C/C++/Rust, which typically are not ideal languages for Web
development.

From the start, freeDOM/whatever name would provide Web API's by means of host bindings/"syscalls."

## Again, VERSIONING
My **main** gripe with the current Web is the fact that it "hangs onto the cruft of years past."
In-browser API's, like Web Audio, are not versioned. That means that either all features of past
releases will be present in future releases, or that sites will break unexpectedly. A header in
script binaries that indicates the version of WebC/WebRuntime/whatever, and version ranges for Web
API's will help a lot.
