type t = Dom.domTokenList;

[@bs.get] external length : t => int = "length";

[@bs.send.pipe : t] [@bs.return nullable] external item : int => option(string) = "width";
[@bs.send.pipe : t] external add : string => unit = "add";
[@bs.send.pipe : t] [@bs.splice] external addMany : array(string) => unit = "add";
[@bs.send.pipe : t] external contains : string => bool = "contains";
/* entries: iterator API, should have language support */
[@bs.send.pipe : t] external forEach : ((string, int) => unit) => unit = "forEach";
/* keys: iterator API, should have language support */
[@bs.send.pipe : t] external remove : string => unit = "remove";
[@bs.send.pipe : t] [@bs.splice] external removeMany : array(string) => unit = "remove";
[@bs.send.pipe : t] external replace : (string, string) => unit = "replace"; /* experimental */
[@bs.send.pipe : t] external supports : string => bool = "supports"; /* experimental, Content Management Level 1 */
[@bs.send.pipe : t] external toggle : string => bool = "toggle";
[@bs.send.pipe : t] external toggleForced : (string, [@bs.as {json|true|json}] _) => bool = "toggle";
[@bs.send.pipe : t] external toString : string = "toString";
/* values: iterator API, should have language support */

[@bs.get] external value : t => string = "value"; /* experimental, from being merged with domSettableTokenList */
[@bs.set] external setValue : (t, string) => unit = "value"; /* experimental, from being merged with domSettableTokenList */
