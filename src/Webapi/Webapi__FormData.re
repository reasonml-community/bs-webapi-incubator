[@text "See https://developer.mozilla.org/en-US/docs/Web/API/FormData"];

module EntryValue: {
  type t;
  let classify: t => [> `String(string) | `File(Webapi__File.t)];
} = {
  type t;

  let classify = t =>
    if (Js.typeof(t) == "string") `String(Obj.magic(t))
    else `File(Obj.magic(t));
};

type t;

[@bs.new] external make: (~form:Webapi__Dom__HtmlFormElement.t=?, unit) => t =
  "FormData";

[@bs.send.pipe: t] external append: (~name: string, string) => unit = "";

[@bs.send.pipe: t] external delete: string => unit = "";

[@bs.send] external entries: t => Webapi__Iterator.t((string, string)) =
  "";

[@bs.send.pipe: t] [@bs.return nullable] external get: string => option(EntryValue.t) =
  "";

[@bs.send.pipe: t] external getAll: string => array(EntryValue.t) = "";

[@bs.send.pipe: t] external has: string => bool = "";

[@bs.send] external keys: t => Webapi__Iterator.t(string) = "";

[@bs.send.pipe: t] external set: (~name: string, ~value: string) => unit =
  "";

[@bs.send.pipe: t] external setBlob: (~name: string, ~value: Webapi__Blob.t, ~filename: string=?) => unit =
  "set";

[@bs.send.pipe: t] external setFile: (~name: string, ~value: Webapi__File.t, ~filename: string=?) => unit =
  "set";

[@bs.send] external values: t => Webapi__Iterator.t(EntryValue.t) = "";
