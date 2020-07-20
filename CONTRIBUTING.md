Thank you for contributing to `bs-webapi`. Please follow the steps here
to help keep things smooth.

## Before starting

Please ensure you are working on an open issue. If necessary, you can
open the issue and then start working. This will give people a chance to
verify the issue and potentially save work.

Please ensure you turn off auto-formatting while working on this project.
For historical reasons, it does not use auto-formatting. If you auto-
format files in this project, it will lead to noisy diffs that will be
hard to review. I have included a project-specific setting that instructs
VSCode to turn off auto-formatting.

## When creating a PR

Please ensure the PR has the following:

- A minimal description of the PR's purpose
- A link to the issue at the end of the description, e.g. `Fix #19`
- `@since <VERSION>` directive in a doc comment if adding a new item in
  the code
- Deprecates instead of removing items in minor versions
- Adds new item to replace deprecated item
- Adds doc comment on deprecated item
- Adds changelog entry for the PR
- Updates version number in `package.json`–if necessary–following SemVer

I will also expect other best practices in the PR, e.g. proper git commit
messages.

## During review

If you make any changes, please try to push new commits instead of force-
pushing and wiping out the old ones. It helps when reviewing changes, and
I will squash the branch when merging anyway.

## After PR merged or closed

Thank you for your contribution. I usually publish a new version on
Sunday night (Eastern Time).
