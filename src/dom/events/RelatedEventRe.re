type t = Dom.relatedEvent;

include
  EventRe.Impl(
    {
      type nonrec t = t;
    }
  );

[@bs.new] external make : string => t = "RelatedEvent";

[@bs.new] external makeWithOptions : (string, Js.t({..})) => t = "RelatedEvent";

[@bs.get] [@bs.return null_to_opt] external relatedTarget : t => option(Dom.eventTarget) = "";
