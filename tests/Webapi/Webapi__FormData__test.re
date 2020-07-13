open Webapi.FormData;

module It = Webapi.Iterator;

let formData = make();

append(~name="a", ~value="1", formData);
delete("a", formData);

let entry = formData |> entries |> It.next;
let _ = It.Next.done_(entry);
let _ = It.Next.value(entry);

let _ = get("a", formData);
let _ = getAll("a", formData);
let _ = has("a", formData);
let _ = formData |> keys |> It.next;

set(~name="b", ~value="2", formData);

let _ = formData |> values |> It.next;
