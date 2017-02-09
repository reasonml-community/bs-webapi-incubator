open ReasonJs;

/* Adapted from https://developer.mozilla.org/en-US/docs/Web/API/Document_Object_Model/Examples#Example_7:_Displaying_Event_Object_Properties */

open Document;
open Element;

document
  |> createElement "div"
  |> className;

/*
/* ideal, but requires piped setters */

switch (document |> body) {
  | Some body =>
    document
      |> createElement "div"
      |> setInnerText "</>"
      |> setClassName "reason_tools_button"
      |> setOnClick swap
      |> (body |> appendChild);
  | None =>
    ...
}
*/
