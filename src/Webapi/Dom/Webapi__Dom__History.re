type t = Dom.history;
type state; /* TODO: should be "anything that can be serializable" apparently */

[@bs.get] external length: t => int = "length";
[@bs.get] external scrollRestoration: t => bool ="scrollRestoration"; /* experimental */
[@bs.set]
external setScrollRestoration: (t, bool) => unit = "scrollRestoration"; /* experimental */
[@bs.get] external state: t => state="state";

[@bs.send.pipe: t] external back: unit="back";
[@bs.send.pipe: t] external forward: unit="forward";
[@bs.send.pipe: t] external go: int => unit="int";
[@bs.send.pipe: t] external pushState: (state, string, string) => unit="pushState";
[@bs.send.pipe: t] external replaceState: (state, string, string) => unit="replaceState";
