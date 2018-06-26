# Tutorial SPOJ

Hướng dẫn và chia sẻ lời giải cho các problems trên vn.spoj.com.

## Development

+ Install jekyll theme [here](https://jekyllrb.com/)
+ Install packages in gem. You'll be required password to install packages. If you get error requiring "Make sure that `gem install ...`", please execute the command with `sudo` (if you use linux or macOS).
```bash
bundle install
```
+ Serve jekyll server on localhost, and open `localhost:4000/` to view the site.
```bash
bundle exec jekyll serve
```

## Contribution

### Solution files
The solution files (source code) should be in the repository [https://github.com/vnspoj/solution](https://github.com/vnspoj/solution). You will add your files which name is formatted as `[problem_code].cpp` or `[problem_code].java` in directory `src/*`. 


Example, if the problem you solved is `NKCITY` (the problem url will be [https://vn.spoj.com/problems/NKCITY/](https://vn.spoj.com/problems/NKCITY/)), then your solution file is `NKCITY.cpp` or `NKCITY.java`, and it'll be added to `src`, the path is `src/NKCITY.cpp` (or `.java`). And the file will be served staticly at [https://vnspoj.github.io/solution/src/NKCITY.cpp](https://vnspoj.github.io/solution/src/NKCITY.cpp)


### Tutorial
The tutorial should be in this repository [https://github.com/vnspoj/vnspoj.github.io](https://github.com/vnspoj/vnspoj.github.io). Open directory `_posts` and add new file `markdown` with extension `.md` or `.markdown`, which name is formatted as `yyyy-mm-dd-[problem_code].md` (or `.markdown`), with `yyyy-mm-dd` is year, month, date you write the tutorial and `[problem_code]` as above.


In the new file, the structure should be:

```md
---
layout: post
title:  "NKCITY - Xây dựng thành phố"
categories: [mst, kruskal]
code: NKCITY
src: NKCITY.cpp
---

[Your content here]

```

In the above file, you should change the `title`, `categories`, `code` and `src`, with `src` is name of file you publish in the repository `solution`.


If you need static files (such as iamge, pdf, or bla bla), you can add in the directory `static`, and the url becomes `https://vnspoj.github.io/[path/to/your/file]`